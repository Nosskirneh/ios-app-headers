//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACSubject.h"

@interface RACBehaviorSubject : RACSubject
{
    id _currentValue;
}

+ (id)behaviorSubjectWithDefaultValue:(id)arg1;
@property(retain, nonatomic) id currentValue; // @synthesize currentValue=_currentValue;
- (void).cxx_destruct;
- (void)sendNext:(id)arg1;
- (id)subscribe:(id)arg1;

@end

