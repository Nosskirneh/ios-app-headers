//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RHAbTestInfo : NSObject
{
    NSString *_testId;
    NSString *_testName;
    NSString *_variantId;
    NSString *_variantName;
    NSString *_lsrc;
}

@property(readonly, nonatomic) NSString *lsrc; // @synthesize lsrc=_lsrc;
@property(readonly, nonatomic) NSString *variantName; // @synthesize variantName=_variantName;
@property(readonly, nonatomic) NSString *variantId; // @synthesize variantId=_variantId;
@property(readonly, nonatomic) NSString *testName; // @synthesize testName=_testName;
@property(readonly, nonatomic) NSString *testId; // @synthesize testId=_testId;
- (void).cxx_destruct;
- (id)description;

@end
