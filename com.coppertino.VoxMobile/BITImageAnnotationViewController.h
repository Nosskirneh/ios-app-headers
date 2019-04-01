//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BITImageAnnotation, NSMutableArray, UIImage, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UISegmentedControl, UITapGestureRecognizer;
@protocol BITImageAnnotationDelegate;

@interface BITImageAnnotationViewController : UIViewController
{
    UIImage *_image;
    id <BITImageAnnotationDelegate> _delegate;
    UIImageView *_imageView;
    UISegmentedControl *_editingControls;
    NSMutableArray *_objects;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    UIPinchGestureRecognizer *_pinchRecognizer;
    double _scaleFactor;
    BITImageAnnotation *_currentAnnotation;
    long long _currentInteraction;
    struct CGPoint _panStart;
    struct CGRect _pinchStartingFrame;
}

@property(nonatomic) struct CGRect pinchStartingFrame; // @synthesize pinchStartingFrame=_pinchStartingFrame;
@property(nonatomic) long long currentInteraction; // @synthesize currentInteraction=_currentInteraction;
@property(retain, nonatomic) BITImageAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
@property(nonatomic) struct CGPoint panStart; // @synthesize panStart=_panStart;
@property(nonatomic) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchRecognizer; // @synthesize pinchRecognizer=_pinchRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) UISegmentedControl *editingControls; // @synthesize editingControls=_editingControls;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <BITImageAnnotationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)canDrawNewAnnotation;
- (id)firstAnnotationThatIsNotBlur;
- (void)tapped:(id)arg1;
- (void)pinched:(id)arg1;
- (void)panned:(id)arg1;
- (id)extractImage;
- (void)save:(id)arg1;
- (void)discard:(id)arg1;
- (id)annotationForCurrentMode;
- (void)editingAction:(id)arg1;
- (void)fitImageViewFrame;
- (void)orientationDidChange:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

