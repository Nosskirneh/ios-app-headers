//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ANGAsyncImageViewDelegate-Protocol.h"

@class ANGAsyncImageView, NSString, UIImage;

@interface ANGMenuButtonView : UIView <ANGAsyncImageViewDelegate>
{
    ANGAsyncImageView *_imageView;
    UIImage *_loadedThumb;
}

@property(copy, nonatomic) UIImage *loadedThumb; // @synthesize loadedThumb=_loadedThumb;
@property(retain, nonatomic) ANGAsyncImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)asyncImageSet:(id)arg1;
- (void)updateProfileImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
