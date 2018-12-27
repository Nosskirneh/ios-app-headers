//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UpsellFrequencyManaging-Protocol.h"

@class NSString, NSUserDefaults, UpsellManager;

@interface UpsellFrequencyManager : NSObject <UpsellFrequencyManaging>
{
    NSString *_upsellIdentifier;
    NSUserDefaults *_userDefaults;
    UpsellManager *_upsellManager;
}

@property(readonly, nonatomic) UpsellManager *upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSString *upsellIdentifier; // @synthesize upsellIdentifier=_upsellIdentifier;
- (void).cxx_destruct;
- (_Bool)shouldShowUpgrade;
- (void)markAsDismissed;
- (id)initWithUpsellIdentifier:(id)arg1 userDefaults:(id)arg2 upsellManager:(id)arg3;
- (id)initWithUpsellIdentifier:(id)arg1;

@end

