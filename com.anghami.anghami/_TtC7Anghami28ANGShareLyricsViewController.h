//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ANGLyricItem, ANGLyrics, ANGSong, UIButton, UIImageView, UILabel, UIView;

@interface _TtC7Anghami28ANGShareLyricsViewController : UIViewController
{
    // Error parsing type: , name: lyricItem
    // Error parsing type: , name: lyrics
    // Error parsing type: , name: song
    // Error parsing type: , name: arrowButton
    // Error parsing type: , name: cameraButton
    // Error parsing type: , name: coverArtButton
    // Error parsing type: , name: picker
    // Error parsing type: , name: editButton
    // Error parsing type: , name: coverArtImageView
    // Error parsing type: , name: artistLabel
    // Error parsing type: , name: songLabel
    // Error parsing type: , name: lyricLabel
    // Error parsing type: , name: originalLabelPosition
    // Error parsing type: , name: originalFontSize
    // Error parsing type: , name: gradientView
    // Error parsing type: , name: coverArtImage
    // Error parsing type: , name: containerView
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)pinchGestureAction:(id)arg1;
- (void)panGestureAction:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)cameraButtonPressed:(id)arg1;
- (void)imageButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)close:(id)arg1;
- (void)editButtonPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView;
@property(nonatomic) __weak UIView *gradientView; // @synthesize gradientView;
@property(nonatomic) __weak UILabel *lyricLabel; // @synthesize lyricLabel;
@property(nonatomic) __weak UILabel *songLabel; // @synthesize songLabel;
@property(nonatomic) __weak UILabel *artistLabel; // @synthesize artistLabel;
@property(nonatomic) __weak UIImageView *coverArtImageView; // @synthesize coverArtImageView;
@property(nonatomic) __weak UIButton *editButton; // @synthesize editButton;
@property(nonatomic) __weak UIButton *coverArtButton; // @synthesize coverArtButton;
@property(nonatomic) __weak UIButton *cameraButton; // @synthesize cameraButton;
@property(nonatomic) __weak UIButton *arrowButton; // @synthesize arrowButton;
@property(nonatomic, retain) ANGSong *song; // @synthesize song;
@property(nonatomic, retain) ANGLyrics *lyrics; // @synthesize lyrics;
@property(nonatomic, retain) ANGLyricItem *lyricItem; // @synthesize lyricItem;

@end
