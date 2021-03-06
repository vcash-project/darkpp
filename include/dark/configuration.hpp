/*
 * Copyright (c) 2013-2015 John Connor (BM-NC49AxAjcqVcF5jNPu85Rb8MJ2d9JqZt)
 *
 * This file is part of Dark++.
 *
 * Dark++ is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DARK_CONFIGURATION_HPP
#define DARK_CONFIGURATION_HPP

namespace dark {

    /**
     * Implements a configuration.
     */
    class configuration
    {
        public:

            /**
             * Constructor
             */
            configuration();
        
            /**
             * The singleton accessor.
             */
            static configuration & instance();

            /**
             * The mixer types.
             */
            typedef enum mixer_type_s
            {
                mixer_type_none,
                mixer_type_cj01,
            } mixer_type_t;
        
        private:
        
            /**
             * The mixer type.
             */
            mixer_type_t m_mixer_type;
        
        protected:
        
            // ...
    };
    
} // namespace dark

#endif // DARK_CONFIGURATION_HPP
