//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureSettingsUIProvider-Protocol.h"

@class NSString, SPTSettingsButtonTableViewCell;

@interface SPTSubPageButtonFeatureSettingsItemUIProvider : NSObject <SPTFeatureSettingsUIProvider>
{
    SPTSettingsButtonTableViewCell *_cell;
    CDUnknownBlockType _factory;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType factory; // @synthesize factory=_factory;
@property(retain, nonatomic) SPTSettingsButtonTableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)featureSettingsPresentation:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (id)featureSettingsPresentation:(id)arg1 cellForRow:(unsigned long long)arg2;
- (id)initWithFactory:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

