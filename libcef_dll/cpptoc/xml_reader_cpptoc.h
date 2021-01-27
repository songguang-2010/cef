// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=dab3976baaad474d4ea7764562382969b1071491$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_XML_READER_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_XML_READER_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_xml_reader_capi.h"
#include "include/cef_xml_reader.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefXmlReaderCppToC : public CefCppToCRefCounted<CefXmlReaderCppToC,
                                                      CefXmlReader,
                                                      cef_xml_reader_t> {
 public:
  CefXmlReaderCppToC();
  virtual ~CefXmlReaderCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_XML_READER_CPPTOC_H_
