//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface _TtC4WiMP14ForceClickView : UIView
{
    // Error parsing type: , name: forceCallback
    // Error parsing type: , name: tapCallback
    // Error parsing type: , name: longPressRecognizer
    // Error parsing type: , name: forcePressRecognizer
    // Error parsing type: , name: tapRecognizer
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tapRecognizerDidRecognize:(id)arg1;
- (void)longRecognizerDidRecognize:(id)arg1;
- (void)forceRecognizerDidRecognize:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(nonatomic, copy) CDUnknownBlockType tapCallback; // @synthesize tapCallback;
@property(nonatomic, copy) CDUnknownBlockType forceCallback; // @synthesize forceCallback;

@end
