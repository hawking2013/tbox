/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2011, ruki All rights reserved.
 *
 * \author		ruki
 * \file		overlap.c
 *
 */

/* /////////////////////////////////////////////////////////
 * implemention
 */

tb_long_t tb_eobject_wait_impl(tb_eobject_t* object, tb_long_t timeout)
{
	tb_assert_and_check_return_val(object, -1);

	// type
	tb_size_t otype = object->otype;
	tb_size_t etype = object->etype;
	tb_assert_and_check_return_val(otype == TB_EOTYPE_FILE || otype == TB_EOTYPE_SOCK, -1);

	// fd
	tb_long_t fd = ((tb_long_t)object->handle) - 1;
	tb_assert_and_check_return_val(fd >= 0, -1);
	

	return 0;
}
