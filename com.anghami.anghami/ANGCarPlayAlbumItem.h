//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGCarPlayContentItem.h"

@interface ANGCarPlayAlbumItem : ANGCarPlayContentItem
{
}

- (id)placeholderImageName;
- (_Bool)canBePlayed;
- (void)loadSongsWithCompletion:(CDUnknownBlockType)arg1;
- (void)playAtIndexPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 shuffled:(_Bool)arg3;
- (void)loadChildsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAlbum:(id)arg1;

@end
