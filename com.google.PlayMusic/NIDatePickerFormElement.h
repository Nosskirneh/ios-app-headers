//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NIFormElement.h"

@class NSDate, NSString;

@interface NIDatePickerFormElement : NIFormElement
{
    NSString *_labelText;
    NSDate *_date;
    long long _datePickerMode;
    id _didChangeTarget;
    SEL _didChangeSelector;
}

+ (id)datePickerElementWithID:(long long)arg1 labelText:(id)arg2 date:(id)arg3 datePickerMode:(long long)arg4;
+ (id)datePickerElementWithID:(long long)arg1 labelText:(id)arg2 date:(id)arg3 datePickerMode:(long long)arg4 didChangeTarget:(id)arg5 didChangeSelector:(SEL)arg6;
@property(nonatomic) SEL didChangeSelector; // @synthesize didChangeSelector=_didChangeSelector;
@property(nonatomic) __weak id didChangeTarget; // @synthesize didChangeTarget=_didChangeTarget;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (Class)cellClass;

@end

