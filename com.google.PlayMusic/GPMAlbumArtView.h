//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "GOOTransitioningViewCopying-Protocol.h"

@class GPMArtLayout, GPMArtRequestTicket, NSMutableArray, NSString;
@protocol GPMAlbumArtViewDelegate, GPMImageDataSource;

@interface GPMAlbumArtView : UIImageView <GOOTransitioningViewCopying>
{
    GPMArtRequestTicket *_lastRequestTicket;
    id <GPMImageDataSource> _dataSource;
    GPMArtLayout *_layout;
    NSMutableArray *_effects;
    _Bool _shouldShowDefaultImageDuringLoad;
    _Bool _circular;
    id <GPMAlbumArtViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GPMAlbumArtViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(nonatomic) _Bool shouldShowDefaultImageDuringLoad; // @synthesize shouldShowDefaultImageDuringLoad=_shouldShowDefaultImageDuringLoad;
- (void).cxx_destruct;
- (id)transitioningCopy;
- (void)resetArtRequestState;
- (void)clearImage;
- (void)processArtImage:(id)arg1 withTransitionAnimation:(_Bool)arg2;
- (void)makeArtRequest;
- (_Bool)shouldMakeArtRequestForDataSource:(id)arg1 layout:(id)arg2 effects:(id)arg3;
- (void)displayArtForDataSource:(id)arg1 layout:(id)arg2 effects:(id)arg3;
- (void)displayArtForRequest:(id)arg1;
- (void)displayArtForURL:(id)arg1 defaultImageName:(id)arg2;
- (void)reset;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
