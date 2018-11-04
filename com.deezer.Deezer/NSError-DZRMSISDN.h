//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (DZRMSISDN)
+ (id)dzrMSISDNErrorFromAPIResponseBody:(id)arg1;
+ (id)dzrMSISDNErrorInternal;
+ (id)dzrMSISDNErrorAuthPageAlreadyDisplayed;
+ (id)dzrMSISDNErrorAuthPageInvalidParams:(id)arg1;
+ (id)dzrMSISDNErrorLimitSWAP;
+ (id)dzrMSISDNErrorLimitSMS;
+ (id)dzrMSISDNErrorActivationCodeInvalid;
+ (id)dzrMSISDNErrorActivationCodeCountMax:(id)arg1 maxlength:(unsigned long long)arg2 currentLength:(unsigned long long)arg3;
+ (id)dzrMSISDNErrorActivationCodeCountMin:(id)arg1 minlength:(unsigned long long)arg2 currentLength:(unsigned long long)arg3;
+ (id)dzrMSISDNErrorPhoneAlreayUsed;
+ (id)dzrMSISDNErrorPhoneNotExist;
+ (id)dzrMSISDNErrorPhoneInvalid;
+ (id)dzrMSISDNErrorPhoneCountMax:(id)arg1 maxlength:(unsigned long long)arg2 currentLength:(unsigned long long)arg3;
+ (id)dzrMSISDNErrorPhoneCountMin:(id)arg1 minlength:(unsigned long long)arg2 currentLength:(unsigned long long)arg3;
- (_Bool)dzrIsMSISDNError;
@end

