//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WMPEditorialServiceProvider;

@interface WMPEditorialServiceDAL : NSObject
{
    WMPEditorialServiceProvider *_dataProvider;
}

@property(retain, nonatomic) WMPEditorialServiceProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)fetchCategoryByCategoryIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCategoriesByType:(long long)arg1;
- (void)fetchCategoriesByType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

