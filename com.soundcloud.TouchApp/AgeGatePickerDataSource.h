//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIPickerViewDataSource-Protocol.h"

@class NSArray, NSString;

@interface AgeGatePickerDataSource : NSObject <UIPickerViewDataSource>
{
    NSArray *_options;
}

@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)genderOptions;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

