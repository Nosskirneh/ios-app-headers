//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMAnimatedImageView.h"

#import "IMUIInflator-Protocol.h"

@class IMUIProperties, NSString, UITapGestureRecognizer;

@interface IMUIAnimatedImageView : IMAnimatedImageView <IMUIInflator>
{
    IMUIProperties *_properties;
    UITapGestureRecognizer *_gestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) IMUIProperties *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (void)tapGesture:(id)arg1;
- (void)clearProperties;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

