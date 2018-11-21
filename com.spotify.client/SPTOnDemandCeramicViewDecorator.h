//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCeramicViewDecorator-Protocol.h"

@class NSString;
@protocol SPTOnDemandSet;

@interface SPTOnDemandCeramicViewDecorator : NSObject <SPTCeramicViewDecorator>
{
    id <SPTOnDemandSet> _onDemandSet;
}

@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
- (void).cxx_destruct;
- (void)decorateCell:(id)arg1 forItem:(id)arg2;
- (_Bool)shouldDecorateCellWithItem:(id)arg1;
- (id)initWithOnDemandSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

