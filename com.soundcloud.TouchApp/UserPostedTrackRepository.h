//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaseDAO, CoreDataController;

@interface UserPostedTrackRepository : NSObject
{
    CoreDataController *_controller;
    BaseDAO *_postedTrackDAO;
}

@property(readonly, nonatomic) BaseDAO *postedTrackDAO; // @synthesize postedTrackDAO=_postedTrackDAO;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)buildEmptyWithManipulator:(CDUnknownBlockType)arg1;
- (id)initWithController:(id)arg1 postedTrackDAO:(id)arg2;
- (id)initWithController:(id)arg1;

@end

