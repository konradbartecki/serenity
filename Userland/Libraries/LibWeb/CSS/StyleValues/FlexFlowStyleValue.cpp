/*
 * Copyright (c) 2018-2020, Andreas Kling <kling@serenityos.org>
 * Copyright (c) 2021, Tobias Christiansen <tobyase@serenityos.org>
 * Copyright (c) 2021-2023, Sam Atkins <atkinssj@serenityos.org>
 * Copyright (c) 2022-2023, MacDue <macdue@dueutil.tech>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "FlexFlowStyleValue.h"

namespace Web::CSS {

String FlexFlowStyleValue::to_string() const
{
    return MUST(String::formatted("{} {}", m_properties.flex_direction->to_string(), m_properties.flex_wrap->to_string()));
}

}
