//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, GLUELabel;

@interface SPTSocialListeningFacepileItemView : UIView
{
    GLUELabel *_textLabel;
    GLUEImageView *_imageView;
}

@property(retain, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)addViewConstraints;
- (void)setupImageView;
- (void)setupTextLabel;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

