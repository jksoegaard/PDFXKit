//
//  Copyright (c) 2017 PSPDFKit GmbH. All rights reserved.
//
//  The PSPDFKit Sample applications are licensed with a modified BSD license.
//  Please see License for details. This notice may not be removed from
//  this file.
//

#import <PDFXKit/PDFXPlatform.h>
#import <PDFXKit/PDFXAction.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PDFXActionNamedName) {
    kPDFXActionNamedNone = 0,
    kPDFXActionNamedNextPage = 1,
    kPDFXActionNamedPreviousPage = 2,
    kPDFXActionNamedFirstPage = 3,
    kPDFXActionNamedLastPage = 4,
    kPDFXActionNamedGoBack = 5,
    kPDFXActionNamedGoForward = 6,
    kPDFXActionNamedGoToPage = 7,
    kPDFXActionNamedFind = 8,
    kPDFXActionNamedPrint = 9,
    kPDFXActionNamedZoomIn = 10,
    kPDFXActionNamedZoomOut = 11
};

@interface PDFXActionNamed : PDFXAction <NSCopying>

- (instancetype)initWithName:(PDFXActionNamedName)name PDFX_NOT_IMPLEMENTED_PRIORITY_UNKNOWN;

@property (nonatomic) PDFXActionNamedName name PDFX_NOT_IMPLEMENTED_PRIORITY_UNKNOWN;

@end

NS_ASSUME_NONNULL_END
