//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlaylistVC.h"

@interface Playlist_ForYou : PlaylistVC
{
    double customFooterHeight;
}

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initModules;
- (void)initEmptyData;
- (void)initCustomFooter;
- (void)viewDidLoad;

@end

