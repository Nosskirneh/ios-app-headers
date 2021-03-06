//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSURL, TWTRImageScrollView, UIImage, UIPopoverController;

@interface TWTRImageViewController : UIViewController
{
    TWTRImageScrollView *_scrollView;
    UIImage *_image;
    NSURL *_fullResolutionURL;
    UIPopoverController *_popover;
}

@property(retain, nonatomic) UIPopoverController *popover; // @synthesize popover=_popover;
@property(retain, nonatomic) NSURL *fullResolutionURL; // @synthesize fullResolutionURL=_fullResolutionURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TWTRImageScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)shareTapped;
- (_Bool)shouldPresentShareSheetUsingPopover;
- (void)dismissTapped;
- (void)loadFullImage;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithImage:(id)arg1 fullResolutionURL:(id)arg2;

@end

