//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSIndexPath, NSString, UITableViewCell;

@protocol SPTFreeTierPlaylistCellProvider <NSObject>
- (void)didEndDisplayingPlaylistCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)willDisplayPlaylistCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)didSelectPlaylistCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)configurePlaylistCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (double)heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)identifierForCellForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSDictionary *)reuseIdentifiers;
@end
