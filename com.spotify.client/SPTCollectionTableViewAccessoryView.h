//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIStackView.h"

@class GLUEImageView, SPTCollectionBlueDotView;

@interface SPTCollectionTableViewAccessoryView : UIStackView
{
    SPTCollectionBlueDotView *_blueDotView;
    GLUEImageView *_imageView;
}

@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTCollectionBlueDotView *blueDotView; // @synthesize blueDotView=_blueDotView;
- (void).cxx_destruct;
- (id)initWithImageLoader:(id)arg1 theme:(id)arg2;

@end

