//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CALayer, CAShapeLayer, NSArray, NSMutableArray, UIColor, UIGestureRecognizer, UIImage;

@interface IOSKnobControl : UIControl
{
    float touchStart;
    float positionStart;
    float currentTouch;
    UIGestureRecognizer *gestureRecognizer;
    CALayer *imageLayer;
    CAShapeLayer *shapeLayer;
    CAShapeLayer *pipLayer;
    NSMutableArray *markings;
    UIImage *images[4];
    UIColor *fillColor[4];
    UIColor *titleColor[4];
    _Bool rotating;
    _Bool _circular;
    _Bool _clockwise;
    float _max;
    float _min;
    float _position;
    float _timeScale;
    long long _gesture;
    long long _mode;
    unsigned long long _positions;
    NSArray *_titles;
}

@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) float timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) unsigned long long positions; // @synthesize positions=_positions;
@property(nonatomic) float position; // @synthesize position=_position;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) float min; // @synthesize min=_min;
@property(nonatomic) float max; // @synthesize max=_max;
@property(nonatomic) long long gesture; // @synthesize gesture=_gesture;
@property(nonatomic) _Bool clockwise; // @synthesize clockwise=_clockwise;
@property(nonatomic) _Bool circular; // @synthesize circular=_circular;
- (void).cxx_destruct;
- (double)fontSizeForTitles;
- (double)titleCircumferenceWithFontSize:(double)arg1;
- (id)createShapeLayer;
- (void)addMarkings;
- (void)updateShapeLayer;
- (void)updateImage;
- (int)indexForState:(unsigned long long)arg1;
- (id)getTintColor;
- (void)followGesture:(id)arg1 toPosition:(double)arg2;
- (void)handleVerticalPan:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)setupGestureRecognizer;
- (void)returnToPosition:(float)arg1 duration:(float)arg2;
- (void)snapToNearestPosition;
@property(readonly) float nearestPosition; // @dynamic nearestPosition;
- (double)polarAngleOfPoint:(struct CGPoint)arg1;
- (struct CGPoint)transformTranslationToCenterFrame:(struct CGPoint)arg1;
- (struct CGPoint)transformLocationToCenterFrame:(struct CGPoint)arg1;
@property(readonly, nonatomic) UIColor *currentTitleColor;
@property(readonly, nonatomic) UIColor *currentFillColor;
@property(readonly, nonatomic) UIImage *currentImage;
- (void)tintColorDidChange;
- (_Bool)isHighlighted;
@property(nonatomic) long long positionIndex; // @dynamic positionIndex;
- (void)setPosition:(float)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleColorForState:(unsigned long long)arg1;
- (void)setFillColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)fillColorForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageForState:(unsigned long long)arg1;
- (void)setDefaults;
- (id)initWithFrame:(struct CGRect)arg1 imageNamed:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

