//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DZRMusicLibraryState;

@protocol DZRSynchronizableCell <NSObject>
- (void)setDownloadProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setDownloadProgress:(double)arg1;
- (void)setSyncState:(long long)arg1;

@optional
- (void)setState:(DZRMusicLibraryState *)arg1;
@end

