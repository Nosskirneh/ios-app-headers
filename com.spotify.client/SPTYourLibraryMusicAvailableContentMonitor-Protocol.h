//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTYourLibraryMusicAvailableContentMonitorDelegate;

@protocol SPTYourLibraryMusicAvailableContentMonitor <NSObject>
@property(readonly, nonatomic, getter=isContentAvailable) _Bool contentAvailable;
@property(nonatomic) __weak id <SPTYourLibraryMusicAvailableContentMonitorDelegate> delegate;
@end

