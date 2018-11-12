//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTSlateBuilderProvider, SPTSlateManager, SPTSlateWireframe;

@protocol SlateFeature <NSObject>
- (id <SPTSlateManager>)provideSlateManager:(id <SPTSlateWireframe>)arg1;
- (id <SPTSlateManager>)provideSlateManager;
- (id <SPTSlateBuilderProvider>)provideSlateBuilderProvider;
@end

