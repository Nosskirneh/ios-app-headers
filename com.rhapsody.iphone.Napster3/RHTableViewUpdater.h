//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UITableView;

@interface RHTableViewUpdater : NSObject
{
    CDUnknownBlockType _insertRow;
    CDUnknownBlockType _moveRow;
    CDUnknownBlockType _deleteRow;
    long long _sectionAnimation;
    long long _rowAnimation;
    NSDictionary *_fromSectionsById;
    NSDictionary *_toSectionsById;
    NSDictionary *_fromSectionForModel;
    NSDictionary *_toSectionForModel;
    UITableView *_tableView;
    NSArray *_fromSections;
    NSArray *_toSections;
}

+ (id)updaterWithTableView:(id)arg1 fromSections:(id)arg2 toSections:(id)arg3;
@property(copy, nonatomic) NSArray *toSections; // @synthesize toSections=_toSections;
@property(copy, nonatomic) NSArray *fromSections; // @synthesize fromSections=_fromSections;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *toSectionForModel; // @synthesize toSectionForModel=_toSectionForModel;
@property(retain, nonatomic) NSDictionary *fromSectionForModel; // @synthesize fromSectionForModel=_fromSectionForModel;
@property(retain, nonatomic) NSDictionary *toSectionsById; // @synthesize toSectionsById=_toSectionsById;
@property(retain, nonatomic) NSDictionary *fromSectionsById; // @synthesize fromSectionsById=_fromSectionsById;
@property(nonatomic) long long rowAnimation; // @synthesize rowAnimation=_rowAnimation;
@property(nonatomic) long long sectionAnimation; // @synthesize sectionAnimation=_sectionAnimation;
@property(copy, nonatomic) CDUnknownBlockType deleteRow; // @synthesize deleteRow=_deleteRow;
@property(copy, nonatomic) CDUnknownBlockType moveRow; // @synthesize moveRow=_moveRow;
@property(copy, nonatomic) CDUnknownBlockType insertRow; // @synthesize insertRow=_insertRow;
- (void).cxx_destruct;
- (void)update;
- (long long)updateInternalAndOnlyCountChanges:(_Bool)arg1 max:(long long)arg2;
- (void)buildLookupFromSections:(id)arg1 toSections:(id)arg2;
- (void)generateCommandsForSection:(id)arg1 oldSection:(id)arg2 changeCounter:(long long *)arg3 max:(long long)arg4;
- (_Bool)shouldReuseModel:(id)arg1;

@end
