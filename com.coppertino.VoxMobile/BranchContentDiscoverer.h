//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BranchContentDiscoveryManifest, NSString, NSTimer;

@interface BranchContentDiscoverer : NSObject
{
    BranchContentDiscoveryManifest *_contentManifest;
    NSString *_lastViewControllerName;
    NSTimer *_contentDiscoveryTimer;
    long long _numOfViewsDiscovered;
}

+ (id)getInstance;
@property(nonatomic) long long numOfViewsDiscovered; // @synthesize numOfViewsDiscovered=_numOfViewsDiscovered;
@property(retain, nonatomic) NSTimer *contentDiscoveryTimer; // @synthesize contentDiscoveryTimer=_contentDiscoveryTimer;
@property(retain, nonatomic) NSString *lastViewControllerName; // @synthesize lastViewControllerName=_lastViewControllerName;
@property(retain, nonatomic) BranchContentDiscoveryManifest *contentManifest; // @synthesize contentManifest=_contentManifest;
- (void).cxx_destruct;
- (id)getContentText:(id)arg1;
- (void)addFormattedContentData:(id)arg1 withText:(id)arg2 clearText:(_Bool)arg3;
- (id)getActiveViewController:(id)arg1;
- (id)getActiveViewController;
- (id)getViewText:(id)arg1 forController:(id)arg2;
- (id)getRootView:(id)arg1;
- (void)discoverFilteredViewContents:(id)arg1 contentData:(id)arg2 contentKeys:(id)arg3 clearText:(_Bool)arg4;
- (void)discoverViewContents:(id)arg1 contentData:(id)arg2 contentKeys:(id)arg3 clearText:(_Bool)arg4 ID:(id)arg5;
- (void)readContentData:(id)arg1;
- (void)readContentDataIfNeeded;
- (void)stopDiscoveryTask;
- (void)startDiscoveryTask;
- (void)startDiscoveryTaskWithManifest:(id)arg1;
- (void)dealloc;

@end

