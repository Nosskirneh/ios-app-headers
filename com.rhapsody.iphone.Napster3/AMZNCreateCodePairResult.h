//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface AMZNCreateCodePairResult : NSObject
{
    NSString *_userCode;
    NSURL *_verificationUri;
}

@property(retain, nonatomic) NSURL *verificationUri; // @synthesize verificationUri=_verificationUri;
@property(retain, nonatomic) NSString *userCode; // @synthesize userCode=_userCode;
- (void).cxx_destruct;
- (id)initWithUserCode:(id)arg1 verificationUri:(id)arg2;

@end

