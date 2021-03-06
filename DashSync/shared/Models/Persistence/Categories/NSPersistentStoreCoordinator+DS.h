//
//  Created by Andrew Podkovyrin
//  Copyright © 2020 Dash Core Group. All rights reserved.
//
//  Licensed under the MIT License (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  https://opensource.org/licenses/MIT
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSPersistentStoreCoordinator (DS)

+ (void)ds_destroyStoreAtURL:(NSURL *)url;

+ (void)ds_replaceStoreAt:(NSURL *)targetURL with:(NSURL *)sourceURL;

+ (nullable NSDictionary<NSString *, id> *)ds_metadataAt:(NSURL *)storeURL;

- (NSPersistentStore *)ds_addPersistentStoreAt:(NSURL *)storeURL options:(NSDictionary *)options;

@end

NS_ASSUME_NONNULL_END
