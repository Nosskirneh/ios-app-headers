//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTPhoneNumberSignupCallingCodeRowViewModel : NSObject
{
    NSString *_callingCode;
    NSString *_countryName;
    NSString *_countryCode;
}

@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(readonly, copy, nonatomic) NSString *callingCode; // @synthesize callingCode=_callingCode;
- (void).cxx_destruct;
- (id)initWithCallingCode:(id)arg1 countryName:(id)arg2 countryCode:(id)arg3;

@end

