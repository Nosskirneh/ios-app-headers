//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRLabsProtocol-Protocol.h"

@class NSString;

@interface DZRCarModeLabs : NSObject <DZRLabsProtocol>
{
    _Bool enable;
    NSString *selectedValue;
}

+ (void)forceActivation;
+ (_Bool)isVisible;
+ (long long)rank;
+ (id)featureId;
+ (id)feature;
@property(retain, nonatomic) NSString *selectedValue; // @synthesize selectedValue;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enable; // @synthesize enable;
- (id)values;
- (id)labUserDefaultKey;
@property(readonly, copy) NSString *description;
- (id)authors;
- (id)title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

