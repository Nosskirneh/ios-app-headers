//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImageView, UILabel, VOXMiniPlayerTransitionAnimator;

@interface _TtC3VOX24PlayerViewControlleriPad : UIViewController
{
    // Error parsing type: , name: artworkImageView
    // Error parsing type: , name: backgroundImageView
    // Error parsing type: , name: trackNameLabel
    // Error parsing type: , name: albumTitleLabel
    // Error parsing type: , name: artistTitleLabel
    // Error parsing type: , name: formatLabel
    // Error parsing type: , name: animator
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, retain) VOXMiniPlayerTransitionAnimator *animator; // @synthesize animator;
@property(nonatomic) __weak UILabel *formatLabel; // @synthesize formatLabel;
@property(nonatomic) __weak UILabel *artistTitleLabel; // @synthesize artistTitleLabel;
@property(nonatomic) __weak UILabel *albumTitleLabel; // @synthesize albumTitleLabel;
@property(nonatomic) __weak UILabel *trackNameLabel; // @synthesize trackNameLabel;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView;
@property(nonatomic) __weak UIImageView *artworkImageView; // @synthesize artworkImageView;

@end

