//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol MDXScreen, MDXScreenDiscovery;

@protocol MDXScreenDiscoveryDelegate <NSObject>
- (void)MDXScreenDiscovery:(id <MDXScreenDiscovery>)arg1 smartRemoteRequestedForScreen:(id <MDXScreen>)arg2;
- (void)MDXScreenDiscovery:(id <MDXScreenDiscovery>)arg1 shouldDisconnectFromScreen:(id <MDXScreen>)arg2;
- (void)MDXScreenDiscovery:(id <MDXScreenDiscovery>)arg1 shouldConnectToScreen:(id <MDXScreen>)arg2;
- (void)MDXScreenDiscovery:(id <MDXScreenDiscovery>)arg1 screenDidDisappear:(id <MDXScreen>)arg2;
- (void)MDXScreenDiscovery:(id <MDXScreenDiscovery>)arg1 screenDidAppear:(id <MDXScreen>)arg2;
- (void)MDXScreenDiscoveryDidUpdateScreens:(id <MDXScreenDiscovery>)arg1;

@optional
- (void)MDXScreenDiscovery:(id <MDXScreenDiscovery>)arg1 existingSessionDiscoveredForScreen:(id <MDXScreen>)arg2;
@end

