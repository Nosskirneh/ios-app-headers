//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (DZRAPIError)
+ (id)dzrDZRAPIErrorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
+ (id)dzrDZRAPIErrorWithCode:(unsigned long long)arg1 reason:(id)arg2;
+ (id)dzrAPIValidationErrorWithMessage:(id)arg1;
+ (id)errorWithDZRAPIErrorNumber:(id)arg1;
+ (id)userInfoWithPayload:(id)arg1 fromError:(id)arg2;
+ (id)errorWithDZRAPIErrorDictionary:(id)arg1 andPayload:(id)arg2;
+ (id)dzrErrorFromAPIResponseBody:(id)arg1;
+ (_Bool)dzrISDZRAPIUnknownError:(id)arg1;
- (_Bool)dzrIsDZRARoamingError;
- (_Bool)dzrIsDZRAPIUnknownError;
- (_Bool)dzrIsDZRAPISessionError;
- (_Bool)dzrIsDZRAPIError;
@end

