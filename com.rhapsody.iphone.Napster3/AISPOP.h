//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AISPOP : NSObject
{
    NSString *_spopKey;
    NSString *_spopMethod;
    NSString *_spopChallenge;
}

+ (id)spop;
@property(retain, nonatomic) NSString *spopChallenge; // @synthesize spopChallenge=_spopChallenge;
@property(retain, nonatomic) NSString *spopMethod; // @synthesize spopMethod=_spopMethod;
@property(retain, nonatomic) NSString *spopKey; // @synthesize spopKey=_spopKey;
- (void).cxx_destruct;
- (id)getSHA256HashStringFrom:(id)arg1;
- (id)generate32BytesKey;
- (void)regenerateSpop;
- (void)generateWithChallenge:(id)arg1 challengeMethod:(id)arg2;
- (id)init;

@end

