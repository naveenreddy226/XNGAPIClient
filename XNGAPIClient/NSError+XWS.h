//
// Copyright (c) 2013 XING AG (http://xing.com/)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface NSError (XWS)

@property (nonatomic, assign, readonly) BOOL isXWSError;
@property (nonatomic, assign, readonly) BOOL isHTTPError;
@property (nonatomic, strong, readonly) NSString *xwsErrorName;
@property (nonatomic, assign, readonly) BOOL xws_invalidRecipient;

@property (nonatomic, assign, readonly) BOOL xws_accessDenied;

+ (NSError *)xwsErrorWithStatusCode:(NSInteger)statusCode
                           userInfo:(NSDictionary *)userInfo;

+ (NSError *)httpErrorWithStatusCode:(NSInteger)statusCode
                            userInfo:(NSDictionary *)userInfo;

- (NSString *)xwsLocalizedErrorWithPrefix:(NSString *)prefix;

@end