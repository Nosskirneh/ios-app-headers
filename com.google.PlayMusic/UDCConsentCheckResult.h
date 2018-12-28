//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, UDCConsentDialogConfig, UDCConsentParams;

@interface UDCConsentCheckResult : NSObject
{
    long long _status;
    UDCConsentParams *_params;
    UDCConsentDialogConfig *_dialogConfig;
    NSError *_error;
}

@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) UDCConsentDialogConfig *dialogConfig; // @synthesize dialogConfig=_dialogConfig;
@property(copy, nonatomic) UDCConsentParams *params; // @synthesize params=_params;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

