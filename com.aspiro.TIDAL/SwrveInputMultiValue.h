//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SwrveInputItem.h"

@class NSArray, NSString;

@interface SwrveInputMultiValue : SwrveInputItem
{
    NSArray *values;
    NSString *description;
    long long selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSArray *values; // @synthesize values;
- (void).cxx_destruct;
- (id)fetchStandardCell:(id)arg1 forRow:(unsigned long long)arg2;
- (id)fetchDescriptionCell:(id)arg1;
- (double)heightForRow:(unsigned long long)arg1 inTableView:(id)arg2;
- (unsigned long long)numberOfRowsNeeded;
- (_Bool)hasDescription;
- (void)loadViewWithContainerView:(id)arg1;
- (id)userResponse;
- (id)cellForRow:(unsigned long long)arg1 inTableView:(id)arg2;
- (id)initWithTag:(id)arg1 andDictionary:(id)arg2;

@end
