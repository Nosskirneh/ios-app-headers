//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (HAMErrors)
+ (long long)HAMErrorCodeForURLErrorCode:(long long)arg1;
+ (id)HAMErrorWithHTTPURLResponse:(id)arg1 userInfo:(id)arg2 request:(id)arg3;
+ (id)HAMErrorWithURLError:(id)arg1 userInfo:(id)arg2 request:(id)arg3;
+ (id)HAMErrorWithCode:(long long)arg1 exception:(id)arg2;
+ (id)HAMErrorWithCode:(long long)arg1 details:(id)arg2 OSStatus:(int)arg3;
+ (id)HAMErrorWithCode:(long long)arg1 userInfo:(id)arg2 details:(id)arg3 underlyingError:(id)arg4;
+ (id)HAMErrorWithCode:(long long)arg1 details:(id)arg2 underlyingError:(id)arg3;
+ (id)HAMErrorWithCode:(long long)arg1 details:(id)arg2 format:(id)arg3 OSStatus:(int)arg4;
+ (id)HAMErrorWithCode:(long long)arg1 details:(id)arg2 format:(id)arg3;
+ (id)HAMErrorWithCode:(long long)arg1 details:(id)arg2;
+ (id)HAMErrorWithCode:(long long)arg1;
+ (id)HAMErrorWithCode:(long long)arg1 userInfo:(id)arg2;
- (_Bool)ham_isTransientNetworkError;
@end

