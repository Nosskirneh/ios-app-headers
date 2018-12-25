//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWATriggerComponent-Protocol.h"

@class GWADependencyGraph, NSMutableArray, NSString, OrchMenuItem;

@interface GWAMenuItem : NSObject <GWATriggerComponent>
{
    OrchMenuItem *_menuItem;
    GWADependencyGraph *_dependencyGraph;
    NSMutableArray *_clickTriggers;
}

- (void).cxx_destruct;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)tapped;
- (id)initWithMenuItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

