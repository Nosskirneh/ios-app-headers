//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GHKUserConfig : NSObject
{
    NSString *_callbackContactName;
    NSString *_callbackCountryCode;
    NSString *_callbackPhoneNumber;
    NSString *_issueDescription;
}

@property(copy, nonatomic) NSString *issueDescription; // @synthesize issueDescription=_issueDescription;
@property(copy, nonatomic) NSString *callbackPhoneNumber; // @synthesize callbackPhoneNumber=_callbackPhoneNumber;
@property(copy, nonatomic) NSString *callbackCountryCode; // @synthesize callbackCountryCode=_callbackCountryCode;
@property(copy, nonatomic) NSString *callbackContactName; // @synthesize callbackContactName=_callbackContactName;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

