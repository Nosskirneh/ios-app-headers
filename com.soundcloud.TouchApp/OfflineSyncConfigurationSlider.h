//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@protocol OfflineSyncConfigurationSliderDelegate;

@interface OfflineSyncConfigurationSlider : UISlider
{
    unsigned long long _stepSize;
    unsigned long long _disableSizeValuesSmallerThan;
    unsigned long long _maxSizeValue;
    id <OfflineSyncConfigurationSliderDelegate> _delegate;
}

@property(nonatomic) __weak id <OfflineSyncConfigurationSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long maxSizeValue; // @synthesize maxSizeValue=_maxSizeValue;
@property(nonatomic) unsigned long long disableSizeValuesSmallerThan; // @synthesize disableSizeValuesSmallerThan=_disableSizeValuesSmallerThan;
@property(nonatomic) unsigned long long stepSize; // @synthesize stepSize=_stepSize;
- (void).cxx_destruct;
- (float)numberOfSteps;
- (float)valueForSize:(unsigned long long)arg1;
- (unsigned long long)roundedSizeForSliderValue:(float)arg1;
- (float)disableStepsSmallerThan;
- (void)didFinishChanging;
- (void)isChanging;
@property(nonatomic) unsigned long long sizeValue;
- (id)initWithCoder:(id)arg1;

@end

