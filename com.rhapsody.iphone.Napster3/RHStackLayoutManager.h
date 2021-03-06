//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHLayoutManagerViewDelegate-Protocol.h"

@class NSArray, NSString, RHLayoutManagerManagedViewAdapter, RHLayoutManagerView;
@protocol RHStackLayoutManagerLayoutLogic;

@interface RHStackLayoutManager : NSObject <RHLayoutManagerViewDelegate>
{
    _Bool _initialized;
    int _flow;
    id <RHStackLayoutManagerLayoutLogic> _layoutLogic;
    RHLayoutManagerView *_managedView;
    RHLayoutManagerManagedViewAdapter *_managedViewAdapter;
    NSArray *_managedViewAdapters;
}

@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSArray *managedViewAdapters; // @synthesize managedViewAdapters=_managedViewAdapters;
@property(readonly, nonatomic) RHLayoutManagerManagedViewAdapter *managedViewAdapter; // @synthesize managedViewAdapter=_managedViewAdapter;
@property(retain, nonatomic) RHLayoutManagerView *managedView; // @synthesize managedView=_managedView;
@property(retain, nonatomic) id <RHStackLayoutManagerLayoutLogic> layoutLogic; // @synthesize layoutLogic=_layoutLogic;
@property(nonatomic) int flow; // @synthesize flow=_flow;
- (void).cxx_destruct;
- (id)viewAdapterForManagedView:(id)arg1;
- (void)layoutManagedViews:(id)arg1;
- (void)resetLayoutManager:(id)arg1;
- (void)initializeLayoutManager:(id)arg1;
- (id)initWithLayoutLogic:(id)arg1 andFlow:(int)arg2;
- (id)initWithLayoutLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

