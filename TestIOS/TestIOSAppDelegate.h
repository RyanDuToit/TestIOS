//
//  TestIOSAppDelegate.h
//  TestIOS
//
//  Created by Ryan Dutoit on 6/6/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//  Adding new comment
//  a second comment in ryan branch

//next new comment
#import <UIKit/UIKit.h>

@interface TestIOSAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
