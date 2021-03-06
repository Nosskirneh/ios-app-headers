//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHSearchAllAbstractTopResultCellViewModel.h"

@class RHPlaylistMO;

@interface RHSearchAllPlaylistTopResultCellViewModel : RHSearchAllAbstractTopResultCellViewModel
{
    RHPlaylistMO *_playlist;
}

@property(retain, nonatomic) RHPlaylistMO *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (void)showDetailsView;
- (_Bool)shouldHandleUserAction;
- (_Bool)playableStateEnabled;
- (id)clarifyingLabel;
- (id)artistNameLabel;
- (id)nameLabel;
- (long long)artworkImageContentMode;
- (id)placeholderImageForSize:(struct CGSize)arg1;
- (id)artworkImageForSize:(struct CGSize)arg1;
- (id)initWithPlaylist:(id)arg1 andRootViewModel:(id)arg2;

@end

