//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (XCallbackURL)
+ (id)urlDecode:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (id)XCallbackURLWithScheme:(id)arg1 action:(id)arg2 source:(id)arg3 sourceIconURL:(id)arg4 successURL:(id)arg5 errorURL:(id)arg6 cancelURL:(id)arg7 parameters:(id)arg8 encodeParameters:(_Bool)arg9;
+ (id)XCallbackURLWithScheme:(id)arg1 action:(id)arg2 source:(id)arg3 sourceIconURL:(id)arg4 successURL:(id)arg5 errorURL:(id)arg6 cancelURL:(id)arg7 parameters:(id)arg8;
- (_Bool)isXCallbackURL;
- (id)xCallbackURL_queryParameters;
@end

