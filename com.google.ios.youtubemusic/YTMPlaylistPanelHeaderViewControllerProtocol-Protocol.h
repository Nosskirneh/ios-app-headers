//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTIPlaylistPanelRenderer;

@protocol YTMPlaylistPanelHeaderViewControllerProtocol <NSObject>
@property(retain, nonatomic) YTIPlaylistPanelRenderer *playlistPanelRenderer;
- (void)updateHeaderControls;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
@end

